/* speed.exe 004c45b0 FUN_004c45b0; analysis pseudocode, not buildable source.
 * calls 004b21b0 FUN_004b21b0
 * calls 00460c70 FUN_00460c70
 * calls 0081c4d8 FUN_0081c4d8
 * calls 0081c4b0 FUN_0081c4b0
 */

undefined4 __thiscall FUN_004c45b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0x124) = 0;
  FUN_00460c70(param_1 + 300,param_2);
  *(undefined4 *)(param_1 + 0x128) = param_3;
  cVar1 = FUN_004b21b0();
  if (cVar1 != '\0') {
    FUN_0081c4d8(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_0081c4b0(*(undefined4 *)(param_1 + 0x18),0,param_2,param_3);
  return 0;
}

