/* speed.exe 0064ae60 FUN_0064ae60; analysis pseudocode, not buildable source.
 * calls 0045c030 FUN_0045c030
 */

undefined * FUN_0064ae60(undefined *param_1)

{
  undefined *puVar1;
  
  FUN_0045c030();
  puVar1 = PTR_PTR_008f7ea8;
  PTR_PTR_008f7ea8 = param_1;
  return puVar1;
}

