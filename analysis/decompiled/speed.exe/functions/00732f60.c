/* speed.exe 00732f60 FUN_00732f60; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 0078a290 FUN_0078a290
 */

void FUN_00732f60(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 300);
  uVar1 = FUN_0078a290(param_1);
  FUN_0078a310(uVar1,uVar2);
  return;
}

