/* speed.exe 004a08f0 FUN_004a08f0; analysis pseudocode, not buildable source.
 * calls 00492070 FUN_00492070
 */

void __fastcall FUN_004a08f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_00492070("BankName: %s\n",*param_1);
  FUN_00492070("#AnimNameLookups: %d\n",param_1[3]);
  FUN_00492070("#Loads: %d\n",param_1[1]);
  FUN_00492070("#Anims: %d\n",param_1[2]);
  FUN_00492070("Animation     #Evals    #DeltaSums    #Frames   #Creates          #CPUCycles\n");
  iVar4 = 0;
  if (0 < (int)param_1[2]) {
    iVar3 = 0;
    do {
      iVar1 = param_1[4];
      puVar2 = (undefined4 *)(iVar1 + iVar3);
      FUN_00492070("  %7d %10d    %10d %10d %10d %19d\n",iVar4,*puVar2,puVar2[1],puVar2[2],
                   *(undefined4 *)(iVar1 + 0xc + iVar3),*(undefined4 *)(iVar1 + 0x10 + iVar3));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar4 < (int)param_1[2]);
  }
  return;
}

