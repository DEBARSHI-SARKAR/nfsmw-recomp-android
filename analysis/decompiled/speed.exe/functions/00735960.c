/* speed.exe 00735960 FUN_00735960; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0078b2c0 FUN_0078b2c0
 */

void __thiscall
FUN_00735960(int param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0x2c) == '\0') || (param_4 < *(float *)(param_1 + 0x40))) {
    *(undefined1 *)(param_1 + 0x111) = 0;
    *(undefined1 *)(param_1 + 0x112) = 0;
    *(undefined4 *)(param_1 + 0x30) = param_2;
    *(undefined4 *)(param_1 + 0x34) = param_3;
    *(float *)(param_1 + 0x40) = param_4;
    *(undefined4 *)(param_1 + 0x44) = param_5;
    iVar1 = FUN_0078b2c0();
    iVar2 = FUN_007c4b80();
    *(int *)(param_1 + 0x20) = iVar1 - iVar2;
    iVar2 = FUN_0078b2c0();
    iVar1 = *(int *)(param_1 + 0x20);
    iVar3 = FUN_0078b2c0();
    *(int *)(param_1 + 0x28) = (iVar2 - iVar1) - iVar3;
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}

