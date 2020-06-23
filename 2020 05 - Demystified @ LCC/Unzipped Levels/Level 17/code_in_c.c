 #include <stdio.h>
 #include <stdlib.h>

 #define STB_IMAGE_IMPLEMENTATION
 #include ".stb_image/stb_image.h"
 #define STB_IMAGE_WRITE_IMPLEMENTATION
 #include ".stb_image/stb_image_write.h"

 int main(void) {
int width, height, channels;
unsigned char *img = stbi_load("image.png", &width, &height, &channels, 0);
/*  width contains width of the image. Same with the height
	img is a 1-dimensional array which contains the pixel values rowwise
	visit this link for further details: http://www.cplusplus.com/forum/general/200014/ 
*/

// Write your code in here









// Don't make any changes here
stbi_write_png("output.png", width, height, channels, img, width * channels);
 }
