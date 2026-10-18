/* speed.exe 0049fcf0 FUN_0049fcf0; analysis pseudocode, not buildable source.
 * calls 00493ff0 FUN_00493ff0
 * calls 004a05a0 FUN_004a05a0
 */

void __thiscall FUN_0049fcf0(int param_1,int param_2,float *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  if (param_4 == 0) {
    if (0 < iVar3) {
      puVar4 = (undefined4 *)(param_2 + 0x24);
      piVar2 = (int *)(param_1 + 0x1c);
      pfVar5 = param_3;
      do {
        FUN_00493ff0(puVar4[-9],puVar4[-8],puVar4[-7],puVar4[-5],puVar4[-4],puVar4[-3],puVar4[-2],
                     puVar4[-1],*puVar4,puVar4[1]);
        *pfVar5 = (float)puVar4[-6] * *pfVar5;
        pfVar5[4] = pfVar5[4] * (float)puVar4[-6];
        pfVar5[8] = (float)puVar4[-6] * pfVar5[8];
        if (-1 < *piVar2) {
          (*(code *)PTR_FUN_008ee51c)(pfVar5,param_3 + *piVar2 * 0x10,pfVar5);
        }
        puVar4 = puVar4 + 0xc;
        piVar2 = piVar2 + 0x1c;
        pfVar5 = pfVar5 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar1 = 0;
    if (0 < iVar3) {
      puVar4 = (undefined4 *)(param_2 + 0x24);
      piVar2 = (int *)(param_1 + 0x1c);
      pfVar5 = param_3;
      do {
        if ((*(uint *)(param_4 + (iVar1 >> 5) * 4) & 1 << ((byte)iVar1 & 0x1f)) != 0) {
          FUN_00493ff0(puVar4[-9],puVar4[-8],puVar4[-7],puVar4[-5],puVar4[-4],puVar4[-3],puVar4[-2],
                       puVar4[-1],*puVar4,puVar4[1]);
          *pfVar5 = *pfVar5 * (float)puVar4[-6];
          pfVar5[4] = pfVar5[4] * (float)puVar4[-6];
          pfVar5[8] = (float)puVar4[-6] * pfVar5[8];
          if (-1 < *piVar2) {
            (*(code *)PTR_FUN_008ee51c)(pfVar5,param_3 + *piVar2 * 0x10,pfVar5);
          }
        }
        puVar4 = puVar4 + 0xc;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x1c;
        pfVar5 = pfVar5 + 0x10;
      } while (iVar1 < iVar3);
      return;
    }
  }
  return;
}

