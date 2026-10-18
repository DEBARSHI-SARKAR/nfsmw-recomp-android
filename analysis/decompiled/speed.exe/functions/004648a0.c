/* speed.exe 004648a0 FUN_004648a0; analysis pseudocode, not buildable source.
 * calls 00462830 FUN_00462830
 * calls 00464780 FUN_00464780
 */

void __thiscall FUN_004648a0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00462830(&LAB_00460930);
  FUN_00464780("\nMemoryPool: \"%s\"\n",*param_1);
  FUN_00464780("AllocationNumber Address      Size    Debug Text (& Line)\n");
  FUN_00464780("=========================================================\n");
  puVar3 = (undefined4 *)0x0;
  for (puVar1 = (undefined4 *)param_1[3]; puVar1 != param_1 + 3; puVar1 = (undefined4 *)*puVar1) {
    if ((param_2 < 1) && (0 < param_3)) {
      if ((puVar3 != (undefined4 *)0x0) &&
         (iVar2 = ((((uint)*(ushort *)((int)puVar3 + 10) - (uint)*(ushort *)((int)puVar1 + 10)) -
                   puVar3[3]) - (int)puVar3) + (int)puVar1, iVar2 != 0)) {
        FUN_00464780("     *************** FREE    %6d **************\n",iVar2);
      }
      FUN_00464780("    %5d        0x%08x %7d   %s",0,
                   (int)puVar1 - (uint)*(ushort *)((int)puVar1 + 10),puVar1[3],&DAT_00890978);
      FUN_00464780(&DAT_00894304);
      puVar3 = puVar1;
    }
    else {
      puVar3 = (undefined4 *)0x0;
    }
  }
  return;
}

