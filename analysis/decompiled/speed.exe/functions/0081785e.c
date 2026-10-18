/* speed.exe 0081785e FUN_0081785e; analysis pseudocode, not buildable source.
 */

void FUN_0081785e(short *param_1,short *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = (undefined2)((int)*param_1 * (int)*param_2 + 0xf >> 5);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_3 = CONCAT22(uVar1,uVar1);
    param_3 = param_3 + 1;
  }
  return;
}

