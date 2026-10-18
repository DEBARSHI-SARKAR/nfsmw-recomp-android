/* speed.exe 00732ef0 FUN_00732ef0; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 0078a700 FUN_0078a700
 */

void FUN_00732ef0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 300);
  uVar1 = FUN_0078a700(param_1);
  FUN_0078a310(uVar1,uVar2);
  return;
}

