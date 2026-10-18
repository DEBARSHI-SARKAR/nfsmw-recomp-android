/* speed.exe 007d6670 ___sbh_heapmin; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls EXTERNAL:00000071 VirtualFree
 * calls EXTERNAL:00000070 HeapFree
 */

/* Library Function - Single Match
    ___sbh_heapmin
   
   Library: Visual Studio 2003 Debug */

void ___sbh_heapmin(void)

{
  if (DAT_009c52e4 != (void *)0x0) {
    VirtualFree((LPVOID)(DAT_009c52fc * 0x8000 + *(int *)((int)DAT_009c52e4 + 0xc)),0x8000,0x4000);
    *(uint *)((int)DAT_009c52e4 + 8) =
         0x80000000U >> ((byte)DAT_009c52fc & 0x1f) | *(uint *)((int)DAT_009c52e4 + 8);
    *(undefined4 *)(*(int *)((int)DAT_009c52e4 + 0x10) + 0xc4 + DAT_009c52fc * 4) = 0;
    *(char *)(*(int *)((int)DAT_009c52e4 + 0x10) + 0x43) =
         *(char *)(*(int *)((int)DAT_009c52e4 + 0x10) + 0x43) + -1;
    if (*(char *)(*(int *)((int)DAT_009c52e4 + 0x10) + 0x43) == '\0') {
      *(uint *)((int)DAT_009c52e4 + 4) = *(uint *)((int)DAT_009c52e4 + 4) & 0xfffffffe;
    }
    if ((*(int *)((int)DAT_009c52e4 + 8) == -1) && (1 < DAT_009c52e8)) {
      HeapFree(DAT_009c5318,0,*(LPVOID *)((int)DAT_009c52e4 + 0x10));
      FID_conflict__memcpy
                (DAT_009c52e4,(void *)((int)DAT_009c52e4 + 0x14),
                 (DAT_009c52e8 * 0x14 + DAT_009c52ec) - ((int)DAT_009c52e4 + 0x14));
      DAT_009c52e8 = DAT_009c52e8 + -1;
    }
    DAT_009c52e4 = (void *)0x0;
  }
  return;
}

