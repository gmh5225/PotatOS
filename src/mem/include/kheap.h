#pragma once

void init_kheap();

void* malloc(uint64_t size);

void free(void* addr);