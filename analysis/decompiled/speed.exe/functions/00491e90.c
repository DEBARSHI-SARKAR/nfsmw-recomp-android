/* speed.exe 00491e90 FUN_00491e90; analysis pseudocode, not buildable source.
 * calls 00491ca0 FUN_00491ca0
 */

undefined4 __thiscall FUN_00491e90(int *param_1,byte *param_2,int *param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  undefined4 local_10;
  byte *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  do {
    iVar4 = 0;
    if (*param_1 != 0) {
      iVar4 = *(int *)(*param_1 + 0x10);
    }
    iVar2 = *param_3;
    if (iVar4 <= iVar2) {
      return 0;
    }
    FUN_00491ca0(&local_10,iVar2);
    pbVar3 = param_2;
    pbVar5 = local_c;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00491ef4:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00491ef9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00491ef4;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00491ef9:
    if (iVar4 == 0) {
      *param_4 = local_10;
      param_4[1] = local_c;
      param_4[2] = local_8;
      param_4[3] = local_4;
      *param_3 = *param_3 + 1;
      return 1;
    }
    *param_3 = iVar2 + 1;
  } while( true );
}

