/* speed.exe 007f3863 FUN_007f3863; analysis pseudocode, not buildable source.
 * calls 007f3af8 FUN_007f3af8
 * calls 007f3ae4 FUN_007f3ae4
 * calls 007df530 __vsnprintf
 */

void FUN_007f3863(int param_1,char *param_2,va_list param_3)

{
  undefined4 *puVar1;
  char local_804 [2048];
  
  if ((&DAT_00907fe4)[param_1 * 8] != '\0') {
    __vsnprintf(local_804,0x800,param_2,param_3);
    puVar1 = &DAT_009081e4;
    do {
      if ((*(char *)(puVar1 + 1) != '\0') && ((code *)*puVar1 != (code *)0x0)) {
        (*(code *)*puVar1)(param_1,local_804);
      }
      puVar1 = puVar1 + 3;
    } while ((int)puVar1 < 0x908244);
  }
  return;
}

