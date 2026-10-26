#include<stdio.h>
// 1. Data Seection (Initialized global data)
int data_global_var= 0X12345678;

// 2. RoData Section (Read-only string constant literal)
const char *text_string_literal= "Text_Segment_Verification";

// 3. Text Section (Function execution code block)
void check_execution() {
	printf("Executing within the text segment instruction block.\n");
}
int main() {
	printf("Addresses:\n");
	printf("Data (Global Initialized);%p\n", (void*)&data_global_var);
	printf("Text SString (ROData): %p\n", (void*)text_string_literal);
	printf("Text COde (Function): %p\n", (void*)&check_execution);
	check_execution();
	// Breakpoint here to inspect text and data layers
	printf ("Ready for Text/Data segment inspection!\n");
return 0;
}
