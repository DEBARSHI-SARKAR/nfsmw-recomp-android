/* speed.exe 00576e30 FUN_00576e30; analysis pseudocode, not buildable source.
 * calls 00576c90 FUN_00576c90
 */

void FUN_00576e30(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    FUN_00576c90(6,0);
    return;
  case 1:
    FUN_00576c90(1,0);
    return;
  case 2:
    FUN_00576c90(5,0);
    return;
  case 3:
    FUN_00576c90(7,0);
    return;
  case 4:
    FUN_00576c90(2,0);
    return;
  case 5:
    FUN_00576c90(4,0);
    return;
  case 6:
    uVar1 = 3;
  }
  FUN_00576c90(uVar1,0);
  return;
}

