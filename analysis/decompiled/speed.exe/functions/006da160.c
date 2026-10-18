/* speed.exe 006da160 FUN_006da160; analysis pseudocode, not buildable source.
 */

void FUN_006da160(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  uVar3 = *param_2;
  if ((uVar1 <= uVar2) && ((uVar1 < uVar2 || (uVar3 < *param_1)))) {
    *param_2 = *param_1;
    param_2[1] = uVar2;
    *param_1 = uVar3;
    param_1[1] = uVar1;
  }
  uVar1 = param_3[1];
  uVar2 = param_2[1];
  uVar3 = *param_3;
  if ((uVar1 <= uVar2) && ((uVar1 < uVar2 || (uVar3 < *param_2)))) {
    *param_3 = *param_2;
    param_3[1] = uVar2;
    *param_2 = uVar3;
    param_2[1] = uVar1;
  }
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  uVar3 = *param_2;
  if ((uVar1 <= uVar2) && ((uVar1 < uVar2 || (uVar3 < *param_1)))) {
    *param_2 = *param_1;
    param_2[1] = uVar2;
    *param_1 = uVar3;
    param_1[1] = uVar1;
  }
  return;
}

