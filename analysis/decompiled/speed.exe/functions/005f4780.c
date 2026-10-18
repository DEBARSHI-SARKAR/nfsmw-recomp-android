/* speed.exe 005f4780 FUN_005f4780; analysis pseudocode, not buildable source.
 * calls 0060e370 FUN_0060e370
 * calls 005ed6f0 FUN_005ed6f0
 * calls 00452430 FUN_00452430
 * calls 00605eb0 FUN_00605eb0
 * calls 00614e00 FUN_00614e00
 * calls 005f2530 FUN_005f2530
 * calls 005e87f0 FUN_005e87f0
 * calls 005f30f0 FUN_005f30f0
 */

void __fastcall FUN_005f4780(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
    FUN_005e87f0(0,param_1);
    FUN_005ed6f0();
    FUN_005f2530(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4));
    *(int *)(*(int *)(param_1 + 0x34) + 4) = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(int *)(*(int *)(param_1 + 0x34) + 8) = *(int *)(param_1 + 0x34);
  }
  uVar1 = *DAT_0091e0c8;
  FUN_00614e00(uVar1,**(undefined4 **)(param_1 + 0xc));
  FUN_00605eb0(uVar1);
  FUN_0060e370(uVar1,0xffffd8f0);
  *(undefined1 *)(param_1 + 0x3d) = 0;
  uVar1 = FUN_00452430();
  FUN_005f30f0(uVar1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

