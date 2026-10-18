/* speed.exe 006ea620 FUN_006ea620; analysis pseudocode, not buildable source.
 * calls 005910e0 FUN_005910e0
 * calls 0056ecc0 FUN_0056ecc0
 * calls 0056f100 FUN_0056f100
 * calls 00739a70 FUN_00739a70
 * calls 005af1c0 FUN_005af1c0
 */

void FUN_006ea620(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_310 [784];
  
  uVar1 = FUN_005af1c0(param_1);
  FUN_00739a70(0xffffffff,0,0,0);
  FUN_005910e0(uVar1,0,local_310);
  iVar2 = FUN_0056ecc0(uVar1);
  FUN_0056f100(*(undefined1 *)(iVar2 + 0x10));
  return;
}

