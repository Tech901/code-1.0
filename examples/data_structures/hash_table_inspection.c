// This function inspects our hashtable telling us how many items are in each slot.
// Call this after the dictionary has been loaded.
void inspectHashTable(node* table[], unsigned int table_size) {
    printf("\n---- Hash Table -------------------------------------\n");
    unsigned int count = 0;
    for(unsigned int i = 0; i < table_size; i++) {
        node *n = table[i];
        printf("[%u]", i);
        while(n != NULL) {
            count += 1;
            printf("->[%s]", n->word);
            n = n->next;
        }
        printf(" (%u words)\n", count);
        count = 0;
    }
    printf("---------------------------------------------------\n\n");
}

