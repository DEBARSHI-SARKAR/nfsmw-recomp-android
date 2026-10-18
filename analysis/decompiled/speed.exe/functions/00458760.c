/* speed.exe 00458760 FUN_00458760; analysis pseudocode, not buildable source.
 * calls 00457aa0 FUN_00457aa0
 */

undefined2 * __thiscall FUN_00458760(undefined2 *param_1,undefined2 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_00457aa0(uVar4,0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ushort)param_1[1]);
  }
  *param_1 = *param_2;
  sVar1 = param_2[1];
  param_1[1] = sVar1;
  param_1[2] = param_2[2];
  uVar4 = 0;
  param_1[3] = param_2[3];
  if (sVar1 != 0) {
    iVar3 = 8;
    do {
      if (uVar4 < (ushort)param_2[1]) {
        if (param_2[2] == 0) {
          iVar2 = *(int *)((((ushort)param_2[3] & 0x8000) >> 0xc) + iVar3 + (int)param_2);
        }
        else {
          iVar2 = (int)param_2 +
                  (ushort)param_2[2] * uVar4 + 8 + (((ushort)param_2[3] & 0x8000) >> 0xc);
        }
      }
      else {
        iVar2 = 0;
      }
      FUN_00457aa0(uVar4,iVar2);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < (ushort)param_1[1]);
  }
  return param_1;
}

