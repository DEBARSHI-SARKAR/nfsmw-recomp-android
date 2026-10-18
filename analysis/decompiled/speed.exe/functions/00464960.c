/* speed.exe 00464960 FUN_00464960; analysis pseudocode, not buildable source.
 * calls 00462830 FUN_00462830
 * calls 00464780 FUN_00464780
 */

void __thiscall FUN_00464960(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  FUN_00462830(&LAB_00460950);
  FUN_00464780("\nMemoryPool: \"%s\"\n",*param_1);
  FUN_00464780("AllocationNumber Address      Size    Debug Text (& Line)\n");
  FUN_00464780("=========================================================\n");
  for (puVar1 = (undefined4 *)param_1[3]; puVar1 != param_1 + 3; puVar1 = (undefined4 *)*puVar1) {
    if ((param_2 < 1) && (0 < param_3)) {
      FUN_00464780("    %5d        0x%08x %7d   %s",0,
                   (int)puVar1 - (uint)*(ushort *)((int)puVar1 + 10),puVar1[3],&DAT_00890978);
      FUN_00464780(&DAT_00894304);
    }
  }
  return;
}

