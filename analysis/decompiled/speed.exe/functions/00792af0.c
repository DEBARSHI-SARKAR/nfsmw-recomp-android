/* speed.exe 00792af0 FUN_00792af0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00835b40 FUN_00835b40
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078fe30 FUN_0078fe30
 * calls 00835b20 FUN_00835b20
 */

int __fastcall FUN_00792af0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00835b40(*param_1);
  if (iVar2 == 6) {
    return 1;
  }
  if (*param_1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_00835b40(*param_1);
  }
  iVar2 = FUN_00835b20(*param_1,uVar3);
  if (iVar2 == 2) {
    return -1;
  }
  if (*param_1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_00835b40(*param_1);
  }
  iVar2 = FUN_00835b20(*param_1,uVar3);
  if (iVar2 != 0) {
    return 0;
  }
  if (*param_1 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_00835b40(*param_1);
  }
  FUN_007ec1bd();
  cVar1 = '\x01';
  if (iVar2 == 1) {
    param_1 = param_1 + 0x22;
  }
  else if (iVar2 == 2) {
    param_1 = param_1 + 0x34;
  }
  else if (iVar2 == 3) {
    param_1 = param_1 + 0x4c;
  }
  else if (iVar2 == 4) {
    param_1 = param_1 + 0x4e;
  }
  else {
    if (iVar2 != 5) goto LAB_00792bd2;
    param_1 = param_1 + 0x51;
  }
  cVar1 = FUN_0078fe30(iVar2,param_1);
LAB_00792bd2:
  FUN_007ec1c8();
  return -(uint)(cVar1 != '\x01');
}

