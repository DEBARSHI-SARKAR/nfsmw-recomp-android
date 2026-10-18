/* speed.exe 00741ca0 FUN_00741ca0; analysis pseudocode, not buildable source.
 * calls 0078eba0 FUN_0078eba0
 * calls 00740fa0 FUN_00740fa0
 * calls 0078a310 FUN_0078a310
 * calls 0078f8a0 FUN_0078f8a0
 * calls 007a10c0 FUN_007a10c0
 */

void __fastcall FUN_00741ca0(int param_1)

{
  char cVar1;
  undefined1 local_40c [1036];
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0078f8a0();
    FUN_0078a310(*(undefined1 *)(*(int *)(param_1 + 4) + 0x1148),8);
    FUN_0078a310(*(undefined4 *)(*(int *)(param_1 + 4) + 0x1228),0x20);
    cVar1 = FUN_0078eba0();
    if (cVar1 != '\0') {
      FUN_007a10c0(local_40c);
    }
    if ((((*(char *)(DAT_0091cf90 + 0x141) != '\0') || (DAT_00926064 != 0)) &&
        (DAT_009b10a5 == '\0')) &&
       (*(int *)(*(int *)(param_1 + 4) + 0x1228) != *(int *)(param_1 + 0xd0))) {
      FUN_00740fa0(5);
    }
  }
  return;
}

