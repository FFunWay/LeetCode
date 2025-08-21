/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <limits.h>
#include <stdlib.h>

typedef struct {
    int key;
    int value;
} HashNode;

#define TABLE_SIZE 10007

int hash(int key) {
    key = (key ^ (key >> 20) ^ (key >> 12));
    key = key ^ (key >> 7) ^ (key >> 4);
    return abs(key) % TABLE_SIZE;
}

void insert (HashNode* table, int key, int value) {
    int h = hash(key);
    while (table[h].key != INT_MIN) {
        h = (h + 1) % TABLE_SIZE;
    }
    table[h].key = key;
    table[h].value = value;
}

int find (HashNode* table, int key) {
    int h = hash(key);
    while (table[h].key != INT_MIN) {
        if (table[h].key == key) {
            return table[h].value;
        }
        h = (h + 1) % TABLE_SIZE;
    }
    return -1;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = malloc (2*sizeof(int));
    HashNode* table = calloc(TABLE_SIZE, sizeof(HashNode));

    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i].key = INT_MIN;
    }

    for (int i = 0; i < numsSize; i++) {
        int remain = target - nums[i];
        int foundIndex = find(table, remain);
        if (foundIndex != -1) {
            result[0] = foundIndex;
            result[1] = i;
            free(table);
            return result;
        }
        insert(table, nums[i], i);
    }
    return NULL;
}