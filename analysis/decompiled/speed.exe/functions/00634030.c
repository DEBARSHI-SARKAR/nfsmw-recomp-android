/* speed.exe 00634030 FUN_00634030; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00634030(uint param_1,uint param_2,uint *param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  uVar2 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (param_3[uVar3 * 5 + 5] == param_1) break;
      uVar3 = (param_3[uVar3 * 5 + 5] < param_1) + 1 + uVar3 * 2;
    } while (uVar3 < uVar1);
  }
  if ((uVar3 < uVar1) && (param_2 < param_3[uVar3 * 5 + 7])) {
    uVar2 = *(undefined4 *)(param_4 + (param_3[uVar3 * 5 + 6] + param_2) * 4);
  }
  return uVar2;
}

