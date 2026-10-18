/* speed.exe 007668a0 FUN_007668a0; analysis pseudocode, not buildable source.
 * calls 00633f40 FUN_00633f40
 */

void __thiscall FUN_007668a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = &DAT_0091f170;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_0091f1b8 = param_2;
    DAT_0091f170 = *(undefined4 *)(param_1 + 0x30);
    DAT_0091f174 = *(undefined4 *)(param_1 + 0x34);
    DAT_0091f178 = *(undefined4 *)(param_1 + 0x38);
    DAT_0091f17c = 0x3f800000;
    DAT_0091f1b4 = *(undefined4 *)(DAT_009b3904 + 4);
    DAT_0091f1b0 = param_1;
    FUN_00633f40(*(undefined4 *)(param_1 + 0x18),0);
  }
  if ((*(uint *)(param_1 + 0x10) & 0x200) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffeff;
  }
  return;
}

