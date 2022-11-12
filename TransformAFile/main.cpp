// read a text file, store its data in a struct, and print results


#include <cstdio>
#include <cerrno>
#include <cstring>
#include <cstdlib>



int main() {

	//buffer size
	const int maxstring_buf{ 1024 };
	//create a struct to store the data
	struct inventory_item {
		int sku;
		const char * item_name;
		const char * item_desc;
	};
	//file name variable of the text file to find
	const char * fn{ "C:\\Users\\SilverSpider\\source\\repos\\Working\\TransformAFile\\items.txt" };
	//create a file handle of the text file
	FILE * fo{ fopen(fn, "r") };
	//create a place to store the line from the stream
	char stream_buffer[maxstring_buf];
	
	
	while (fgets(stream_buffer, maxstring_buf, fo)) {

		//create a variable to hold the index
		char * position;
		//create a char to search for
		char tab{ '\t' };
		//look for the sku first
		position = strchr(stream_buffer, tab);
		inventory_item first;
		first.sku = atoi(position-1);
		//find second instance
		char * second_position;
		second_position = strchr(stream_buffer[0] + position, tab);
		
		
		printf("The sku is %d", first.sku);

	}



	return{ 0 };
}
