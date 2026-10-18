/* speed.exe 006117f0 FUN_006117f0; analysis pseudocode, not buildable source.
 * calls 0060dae0 FUN_0060dae0
 * calls 005dbed0 FUN_005dbed0
 * calls 005dc2f0 FUN_005dc2f0
 * calls 005ddec0 FUN_005ddec0
 * calls 00600660 FUN_00600660
 */

void FUN_006117f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = FUN_0060dae0(param_1);
  iVar2 = FUN_005dbed0(iVar1 + -1);
  fVar3 = (float10)FUN_005ddec0();
  FUN_005dc2f0(*(undefined4 *)(iVar2 + 0x28),param_2,iVar1 + -1,(float)fVar3);
  FUN_00600660(param_2);
  return;
}

