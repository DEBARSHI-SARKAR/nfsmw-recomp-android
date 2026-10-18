/* speed.exe 0065cab0 FUN_0065cab0; analysis pseudocode, not buildable source.
 * calls 0065e080 FUN_0065e080
 * calls 00659250 FUN_00659250
 */

void __thiscall FUN_0065cab0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    uVar3 = param_1[3];
    param_2 = param_2 + -1;
    do {
      uVar1 = param_1[1];
      uVar2 = *param_1;
      param_2 = param_2 + 1;
      param_1[1] = param_2;
      param_1[2] = 0;
      param_1[3] = uVar3 & 1;
      uVar4 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(param_2 * 0x10,0);
      *param_1 = uVar4;
      FUN_0065e080(uVar2,uVar1,1);
      uVar3 = param_1[3];
    } while (0x20 < (uVar3 & 0xfffffffe));
  }
  return;
}

