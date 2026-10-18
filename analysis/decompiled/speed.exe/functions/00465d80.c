/* speed.exe 00465d80 FUN_00465d80; analysis pseudocode, not buildable source.
 * calls 004653d0 FUN_004653d0
 * calls 0045f170 FUN_0045f170
 */

undefined4 FUN_00465d80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  iVar1 = FUN_004653d0(param_1 * param_2 + 0x30,0,0,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x24) = param_2;
    *(int *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0xb;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_4;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(int *)(iVar1 + 0x2c) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    FUN_0045f170();
    uVar2 = extraout_ECX;
  }
  return uVar2;
}

