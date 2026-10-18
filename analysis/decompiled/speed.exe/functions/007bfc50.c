/* speed.exe 007bfc50 FUN_007bfc50; analysis pseudocode, not buildable source.
 * calls 007a66d0 FUN_007a66d0
 * calls 00575b10 FUN_00575b10
 * calls 007bcdb0 FUN_007bcdb0
 * calls 00516e30 FUN_00516e30
 * calls 007a65c0 FUN_007a65c0
 * calls 00516e10 FUN_00516e10
 * calls 00516c90 FUN_00516c90
 * calls 00575b00 FUN_00575b00
 */

void __fastcall FUN_007bfc50(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar2 = FUN_00575b00();
  cVar2 = '\x01' - (cVar2 != '\0');
  FUN_00575b10(cVar2);
  FUN_007a66d0(cVar2);
  piVar1 = param_1 + 0xb;
  if (param_1[0xe] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*piVar1 + 0x24))(param_1[0xe]);
  }
  if (cVar2 == '\0') {
    FUN_00516c90(0x5c01c5,param_1[4],0);
    uVar4 = 3;
  }
  else {
    FUN_00516c90(0xa1caff8d,param_1[4],0);
    uVar4 = 4;
  }
  FUN_00516e10(uVar4);
  FUN_00516e30(uVar4);
  FUN_007a65c0();
  (**(code **)(*piVar1 + 0xc))();
  (**(code **)(*piVar1 + 0x3c))();
  FUN_007bcdb0();
  if (*(char *)((int)param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined1 *)((int)param_1 + 0x119) = 1;
    *(undefined1 *)((int)param_1 + 0x11a) = 0;
    param_1[0x44] = 0;
  }
  (**(code **)(*piVar1 + 0x40))(uVar3);
                    /* WARNING: Could not recover jumptable at 0x007bfd2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

