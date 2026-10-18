/* speed.exe 0084b5f0 FUN_0084b5f0; analysis pseudocode, not buildable source.
 * calls 008621b2 Ordinal_52
 * calls EXTERNAL:00000082 InterlockedExchange
 * calls 0078af60 thunk_FUN_004655f0
 */

undefined4 FUN_0084b5f0(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  LONG LVar7;
  
  iVar6 = Ordinal_52(param_1 + 4);
  if (iVar6 == 0) {
    *param_1 = 0xffffffff;
  }
  else {
    puVar5 = (undefined1 *)**(undefined4 **)(iVar6 + 0xc);
    uVar1 = puVar5[2];
    uVar2 = *puVar5;
    uVar3 = puVar5[1];
    uVar4 = puVar5[3];
    *param_1 = 1;
    param_1[1] = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar1),uVar4);
  }
  LVar7 = InterlockedExchange(param_1 + 0x15,1);
  if (LVar7 != 0) {
    thunk_FUN_004655f0(param_1);
  }
  return 0;
}

