/* speed.exe 00722290 FUN_00722290; analysis pseudocode, not buildable source.
 * calls 004662e0 FUN_004662e0
 * calls 00460bf0 FUN_00460bf0
 * calls 00503400 FUN_00503400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00722290(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (DAT_009a39f4 == 0) {
    DAT_009a39f4 = FUN_004662e0(0x110,param_1,"SkidSetSlotPool",0);
    *(uint *)(DAT_009a39f4 + 0x14) = *(uint *)(DAT_009a39f4 + 0x14) & 0xfffffffe;
  }
  puVar2 = &DAT_009942d8;
  do {
    *puVar2 = 0;
    uVar1 = FUN_00460bf0("SKID_ROAD",1,0);
    uVar1 = FUN_00503400(uVar1);
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x99434c);
  _DAT_009a39f8 = 0;
  _DAT_009a39fc = 0;
  return;
}

