/* speed.exe 00650160 FUN_00650160; analysis pseudocode, not buildable source.
 */

int FUN_00650160(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  if ((*param_1 == 0x57574152) && ((char)param_1[1] == '\x01')) {
    uVar2 = param_1[2];
    piVar3 = param_1 + 4;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_2 = *piVar3;
      piVar3 = piVar3 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)param_2 = (char)*piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
      param_2 = (int *)((int)param_2 + 1);
    }
    return param_1[2];
  }
  return 0;
}

