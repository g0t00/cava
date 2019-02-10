#include <stdio.h>
#include <stdint.h>
int16_t buf_16;
int8_t buf_8;
int16_t counter = 0;
int print_raw_out(int bars_count, int fd, int is_binary, int bit_format,
																		int ascii_range, char bar_delim, char frame_delim, const int const f[200]) {
								// if (is_binary) {
																// for (int i = 0; i < bars_count; i++) {
																// 								int f_limited = f[i];
																// 								if (f_limited > (pow(2, bit_format) - 1)) f_limited = pow(2, bit_format) - 1;
																//
																// 								switch (bit_format) {
																// 								case 16:
																// 																buf_16 = f_limited;
																// 																// write(fd, &buf_16, sizeof(int16_t));
																// 																fwrite(&buf_16, sizeof(int16_t), 1, stdout);
																// 																break;
																// 								case 8:
																// 																buf_8 = f_limited;
																// 																fwrite(&buf_8, sizeof(int8_t), 1, stdout);
																// 																break;
																// 								}
																// }
								// } else { // ascii
								if (counter == 0) {

									for (int i = 0; i < bars_count; i++) {
										int f_limited = f[i];
										if (f_limited > (pow(2, 16) - 1)) f_limited = pow(2, 16) - 1;
										printf("%d ", f_limited);
										// int f_ranged = f[i];
										// if (f_ranged > ascii_range) f_ranged = ascii_range;
										//
										// // finding size of number-string in byte
										// int bar_height_size = 2; // a number + \0
										// if (f_ranged != 0) bar_height_size += floor (log10 (f_ranged));
										//
										// char bar_height[bar_height_size];
										// snprintf(bar_height, bar_height_size, "%d", f_ranged);
										//
										// write(fd, bar_height, bar_height_size - 1);
										// write(fd, &bar_delim, sizeof(bar_delim));
									}
									printf("\n");
									counter = 0;
								} else {
									counter++;
								}
								// }
								return 0;
}
