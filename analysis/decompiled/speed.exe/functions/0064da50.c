/* speed.exe 0064da50 FUN_0064da50; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0064da50(int *param_1,byte *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = (param_3 % param_1[2]) * 0x10;
  piVar8 = (int *)(iVar7 + *param_1);
  if (*(int *)(iVar7 + 4 + *param_1) != 0) {
    if (piVar8[3] != 0) {
      *(int *)(piVar8[3] + 8) = piVar8[2];
    }
    if (piVar8[2] != 0) {
      *(int *)(piVar8[2] + 0xc) = piVar8[3];
    }
    pbVar5 = (byte *)piVar8[1];
    piVar1 = (int *)(param_1[1] +
                    ((((uint)pbVar5[2] << 4 ^ (uint)pbVar5[1]) << 4 ^ (uint)*pbVar5) * -0x1a1 &
                    0x1fff) * 4);
    if ((int *)*piVar1 == piVar8) {
      *piVar1 = piVar8[3];
    }
  }
  piVar8[1] = (int)param_2;
  *piVar8 = param_3;
  bVar2 = param_2[2];
  bVar3 = param_2[1];
  bVar4 = *param_2;
  piVar8[2] = 0;
  uVar6 = (((uint)bVar2 << 4 ^ (uint)bVar3) << 4 ^ (uint)bVar4) * -0x1a1 & 0x1fff;
  piVar8[3] = *(int *)(param_1[1] + uVar6 * 4);
  *(int **)(param_1[1] + uVar6 * 4) = piVar8;
  if (piVar8[3] != 0) {
    *(int **)(piVar8[3] + 8) = piVar8;
  }
  return;
}

