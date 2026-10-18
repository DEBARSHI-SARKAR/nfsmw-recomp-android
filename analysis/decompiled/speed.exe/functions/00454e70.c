/* speed.exe 00454e70 FUN_00454e70; analysis pseudocode, not buildable source.
 * calls 00659250 FUN_00659250
 * calls 004565c0 FUN_004565c0
 */

void __thiscall FUN_00454e70(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    uVar3 = param_1[3];
    param_2 = param_2 + -1;
    iVar5 = param_2 * 0xc;
    do {
      uVar1 = param_1[1];
      uVar2 = *param_1;
      param_2 = param_2 + 1;
      param_1[1] = param_2;
      param_1[2] = 0;
      param_1[3] = uVar3 & 1;
      iVar5 = iVar5 + 0xc;
      uVar4 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(iVar5,0);
      *param_1 = uVar4;
      FUN_004565c0(uVar2,uVar1,1);
      uVar3 = param_1[3];
    } while (0x20 < (uVar3 & 0xfffffffe));
  }
  return;
}

