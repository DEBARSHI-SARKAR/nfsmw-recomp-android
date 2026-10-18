/* speed.exe 0083a290 FUN_0083a290; analysis pseudocode, not buildable source.
 * calls 0083a140 FUN_0083a140
 */

uint FUN_0083a290(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uVar4 = 0;
  uVar2 = 0xffffffff;
  do {
    uVar3 = (uVar2 & uVar4 & 1) + (uVar2 >> 1) + (uVar4 >> 1);
    FUN_0083a140(&local_24);
    iVar1 = local_10 - param_1[5];
    if (((((iVar1 == 0) && (iVar1 = local_14 - param_1[4], iVar1 == 0)) &&
         (iVar1 = local_18 - param_1[3], iVar1 == 0)) &&
        (((iVar1 = local_1c - param_1[2], iVar1 == 0 && (iVar1 = local_20 - param_1[1], iVar1 == 0))
         && (iVar1 = local_24 - *param_1, iVar1 == 0)))) || (uVar4 == uVar2)) break;
    if (iVar1 < 1) {
      uVar4 = uVar3 + 1;
    }
    else {
      uVar2 = uVar3 - 1;
    }
  } while (uVar4 <= uVar2);
  return (iVar1 != 0) - 1 & uVar3;
}

