void make_empty(void) {
	top_ptr = &contents[0];
}

void is_empty(void) {
	top_ptr == &contents[0];
}

void is_full(void) {
	top_ptr = &content[STACK_SIZE];
}