/* speed.exe 00790200 FUN_00790200; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 * calls 00460c70 FUN_00460c70
 * calls 00652af0 FUN_00652af0
 */

int __thiscall
FUN_00790200(int param_1,undefined4 param_2,char *param_3,char param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = param_8;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  iVar1 = DAT_009b5588 + 1;
  *(undefined4 *)(param_1 + 0x18) = param_7;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  DAT_009b5588 = iVar1;
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  if (param_4 == '\x01') {
    if (DAT_009b5584 == 0) {
      DAT_009b5584 = *(int *)(param_1 + 0x20);
    }
    *(int *)(param_1 + 0x24) = DAT_009b5584;
  }
  else if (DAT_009b5584 != 0) {
    DAT_009b5584 = 0;
  }
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    iVar1 = FUN_00460c50(param_3);
    uVar2 = FUN_00652af0(iVar1 + 1,8);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    FUN_00460c70(uVar2,param_3);
  }
  return param_1;
}

