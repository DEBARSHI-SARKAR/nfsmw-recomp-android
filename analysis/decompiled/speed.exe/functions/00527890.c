/* speed.exe 00527890 FUN_00527890; analysis pseudocode, not buildable source.
 * calls 00591d90 FUN_00591d90
 * calls 005258b0 FUN_005258b0
 * calls 005b5b70 FUN_005b5b70
 * calls 00572070 FUN_00572070
 */

void __fastcall FUN_00527890(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    pcVar2 = "MC_List.fng";
    if (DAT_0091d218 < 1) {
      iVar1 = FUN_005b5b70("MC_List.fng");
    }
    else {
      FUN_00572070();
      iVar1 = FUN_00591d90(pcVar2);
    }
    if (iVar1 != 0) {
      FUN_005258b0(1);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}

