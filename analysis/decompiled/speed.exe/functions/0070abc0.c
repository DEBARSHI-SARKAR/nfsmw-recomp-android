/* speed.exe 0070abc0 FUN_0070abc0; analysis pseudocode, not buildable source.
 * calls 00634f00 FUN_00634f00
 * calls 00708390 FUN_00708390
 * calls 00706410 FUN_00706410
 * calls 005d51f0 FUN_005d51f0
 */

void __thiscall FUN_0070abc0(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if ((*(int *)(param_2 + 0x44) == -0x5e86b3dd) && (*(int *)(DAT_00993cc8 + 0x138) == 2)) {
    if ((*(int *)(param_2 + 0x40) != 0) &&
       ((iVar3 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*(int *)(param_2 + 0x40))
        , iVar3 != 0 && (*(int **)(iVar3 + 4) != (int *)0x0)))) {
      uVar4 = (**(code **)(**(int **)(iVar3 + 4) + 0x88))();
      uVar4 = FUN_00634f00(uVar4);
      iVar3 = FUN_00706410(1,uVar4);
      if ((iVar3 != 0) &&
         ((piVar5 = (int *)FUN_00708390(0,1), piVar5 != (int *)0x0 &&
          (cVar2 = (**(code **)(*piVar5 + 0x70))(), cVar2 != '\0')))) {
        (**(code **)(*piVar5 + 0xb0))(0xd,0x3f800000,piVar5);
      }
    }
    *(undefined4 *)(param_1 + 0x50) = DAT_00925ae8;
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
  }
  return;
}

