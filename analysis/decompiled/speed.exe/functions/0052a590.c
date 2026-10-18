/* speed.exe 0052a590 FUN_0052a590; analysis pseudocode, not buildable source.
 * calls 00571e80 FUN_00571e80
 * calls 00525220 FUN_00525220
 * calls 007a1fa0 FUN_007a1fa0
 */

void __fastcall FUN_0052a590(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = FUN_00571e80(param_1[4]);
  if (*(char *)((int)param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined1 *)((int)param_1 + 0x119) = 1;
    *(undefined1 *)((int)param_1 + 0x11a) = 0;
    param_1[0x44] = 0;
  }
  (**(code **)(param_1[0xb] + 0x40))(uVar1);
  iVar2 = FUN_007a1fa0();
  *(undefined1 *)(iVar2 + 0x58) = 0;
  FUN_00525220(param_1[4],0xb71b576d,0xb65a46d8);
                    /* WARNING: Could not recover jumptable at 0x0052a5f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

