/* speed.exe 004e69b0 FUN_004e69b0; analysis pseudocode, not buildable source.
 * calls 004b02b0 FUN_004b02b0
 */

void __thiscall FUN_004e69b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  if ((iVar1 != 0) && (*(int *)(param_2 + 0x10) == *(int *)(iVar1 + 0x230))) {
    *(undefined1 *)(param_1 + 0x2a) = 1;
    *(undefined1 *)(param_1 + 0x29) = 0;
    FUN_004b02b0(*(undefined4 *)(param_1 + 0x48),0,0x82,0);
    *(undefined4 *)(param_1 + 0x30) = 0x3ecccccd;
  }
  return;
}

