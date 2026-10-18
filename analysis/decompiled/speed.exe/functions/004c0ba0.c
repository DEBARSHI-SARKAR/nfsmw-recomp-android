/* speed.exe 004c0ba0 FUN_004c0ba0; analysis pseudocode, not buildable source.
 */

code * FUN_004c0ba0(code *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00913e74 + DAT_00913e7c;
  puVar2 = DAT_00913e74;
  if (DAT_00913e74 == puVar1) {
    return param_1;
  }
  do {
    (*param_1)(*puVar2);
    puVar2 = puVar2 + 1;
  } while (puVar2 != puVar1);
  return param_1;
}

