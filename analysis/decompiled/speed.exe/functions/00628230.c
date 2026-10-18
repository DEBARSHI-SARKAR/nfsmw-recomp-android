/* speed.exe 00628230 FUN_00628230; analysis pseudocode, not buildable source.
 * calls 0056bb20 FUN_0056bb20
 * calls 00460ca0 FUN_00460ca0
 * calls 00627ff0 FUN_00627ff0
 * calls 006280c0 FUN_006280c0
 */

void FUN_00628230(undefined4 param_1,int param_2,int param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  if (param_2 == 1) {
    uVar3 = (uint)(param_4 == '\0');
    iVar2 = FUN_0056bb20();
    if (iVar2 != 0xc) {
      iVar2 = FUN_0056bb20();
      if (iVar2 != 5) goto LAB_00628270;
    }
    bVar1 = true;
  }
  else {
    uVar3 = 3 - (param_4 != '\0');
  }
LAB_00628270:
  if ((&DAT_0091f41c)[param_3 * 0xd + uVar3 * 3] == 0) {
    FUN_00460ca0(param_1,&DAT_0089e094,0x104);
    return;
  }
  if (bVar1) {
    FUN_00627ff0(param_1);
    return;
  }
  FUN_006280c0(param_1,0x104,param_2,&DAT_0091f41c + param_3 * 0xd + uVar3 * 3);
  return;
}

