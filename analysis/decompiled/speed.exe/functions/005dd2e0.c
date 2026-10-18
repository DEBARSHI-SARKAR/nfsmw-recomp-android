/* speed.exe 005dd2e0 FUN_005dd2e0; analysis pseudocode, not buildable source.
 * calls 0061c680 FUN_0061c680
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00650310 FUN_00650310
 * calls 00652ad0 _malloc
 * calls 00650350 FUN_00650350
 * calls 00454810 FUN_00454810
 * calls 007c94b0 __chkstk
 * calls 00650300 FUN_00650300
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_005dd2e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x5dd2ea;
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (piVar2 = (int *)FUN_00454810(0x9a4a020a,0), piVar2 != (int *)0x0)) {
    iVar1 = piVar2[1];
    iVar4 = *piVar2;
    if (iVar4 != 0) {
      FUN_00650300(iVar1);
      iVar3 = FUN_00650310(iVar1);
      if (iVar3 == 0) {
        iVar4 = FUN_0061c680(param_2,iVar1,iVar4,"Handler");
      }
      else {
        puVar5 = (undefined1 *)0x0;
        puVar6 = local_1000;
        if (0x1000 < *(uint *)(iVar1 + 8)) {
          puVar5 = _malloc(*(uint *)(iVar1 + 8));
          puVar6 = puVar5;
        }
        FUN_00650350(iVar1,puVar6);
        iVar4 = FUN_0061c680(param_2,puVar6,*(undefined4 *)(iVar1 + 8),"Handler");
        if (puVar5 != (undefined1 *)0x0) {
          thunk_FUN_007c7250(puVar5);
        }
      }
      FUN_00650300(iVar1);
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0x28) = 1;
      }
    }
  }
  return;
}

