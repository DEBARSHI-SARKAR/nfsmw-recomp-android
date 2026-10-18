/* speed.exe 00422610 FUN_00422610; analysis pseudocode, not buildable source.
 * calls 0077ba80 FUN_0077ba80
 * calls 00415080 FUN_00415080
 * calls 007862d0 FUN_007862d0
 * calls 00770060 FUN_00770060
 */

void __fastcall FUN_00422610(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_retaddr;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_c [12];
  
  piVar1 = (int *)(**(code **)(*param_1 + 8))();
  (**(code **)(*piVar1 + 0xb8))(auStack_c);
  piVar1 = (int *)(**(code **)(*param_1 + 4))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))();
  (**(code **)(*param_1 + 0x48))();
  uVar3 = (uint)(unaff_retaddr == 0);
  uVar5 = 0x3f800000;
  puVar4 = &stack0xfffffff0;
  uVar2 = (**(code **)(*piVar1 + 0x20))(puVar4,uVar3,0x3f800000);
  FUN_007862d0(uVar2,puVar4,uVar3,uVar5);
  FUN_00770060();
  if (unaff_retaddr == 2) {
    FUN_0077ba80();
  }
  FUN_00415080();
  return;
}

