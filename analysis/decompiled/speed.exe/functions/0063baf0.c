/* speed.exe 0063baf0 FUN_0063baf0; analysis pseudocode, not buildable source.
 * calls 006f4430 FUN_006f4430
 * calls 005d59f0 FUN_005d59f0
 * calls 00454810 FUN_00454810
 * calls 00456cb0 FUN_00456cb0
 * calls 005d51f0 FUN_005d51f0
 * calls 0045a430 FUN_0045a430
 */

void __fastcall FUN_0063baf0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00879590;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a765c;
  local_4 = 0;
  if (param_1[2] != 0) {
    iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[2]);
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 4);
      if (piVar1 == (int *)0x0) {
        *param_1 = &PTR_LAB_008a66f8;
        ExceptionList = local_c;
        return;
      }
      piVar3 = (int *)FUN_005d59f0(&LAB_00404040);
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)FUN_005d59f0(&LAB_004040e0);
        if (piVar4 != (int *)0x0) {
          piVar5 = (int *)FUN_005d59f0(&LAB_00403700);
          if (piVar5 != (int *)0x0) {
            piVar6 = (int *)(**(code **)(*piVar5 + 0xa0))();
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 300))(piVar5);
            }
          }
          iVar2 = (**(code **)(*piVar3 + 0xc))(param_1[3]);
          uStack_38 = *(undefined4 *)(iVar2 + 4);
          uStack_34 = *(undefined4 *)(iVar2 + 8);
          piVar3 = (int *)(**(code **)(*piVar1 + 0x54))();
          (**(code **)(*piVar3 + 0x3c))(auStack_30);
          (**(code **)(*piVar4 + 0x48))();
          puVar7 = (undefined4 *)FUN_00454810(0xd42e792f,0);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = &DAT_009205e0;
          }
          FUN_00456cb0(puVar7,0,0);
          local_c = (void *)CONCAT31(local_c._1_3_,1);
          iVar2 = (**(code **)(*piVar1 + 0x44))();
          uVar8 = (**(code **)(*piVar1 + 0x70))(*(undefined4 *)(iVar2 + 4),0,0);
          FUN_006f4430(uStack_24,&uStack_38,auStack_2c,uVar8);
          local_4 = local_4 & 0xffffff00;
          FUN_0045a430();
        }
        *param_1 = &PTR_LAB_008a66f8;
        ExceptionList = local_c;
        return;
      }
      *param_1 = &PTR_LAB_008a66f8;
      ExceptionList = local_c;
      return;
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

