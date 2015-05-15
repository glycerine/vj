/*
Copyright 2010-2013 SourceGear, LLC

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

//////////////////////////////////////////////////////////////////

#ifndef H_SG_WC6UPDATE__PRIVATE_PROTOTYPES_H
#define H_SG_WC6UPDATE__PRIVATE_PROTOTYPES_H

BEGIN_EXTERN_C;

//////////////////////////////////////////////////////////////////

void sg_wc_tx__update__determine_target_cset(SG_context * pCtx,
											 sg_update_data * pUpdateData);

void sg_wc_tx__update__fake_merge(SG_context * pCtx,
								  sg_update_data * pUpdateData,
								  SG_vhash ** ppvhStats,
								  SG_varray ** ppvaStatus,
								  SG_bool * pbDidNothing);

void sg_wc_tx__update__apply(SG_context * pCtx,
							 sg_update_data * pUpdateData);

void sg_wc_tx__update__attach(SG_context * pCtx,
							  sg_update_data * pUpdateData,
							  SG_bool * pbWroteBranch);

//////////////////////////////////////////////////////////////////

END_EXTERN_C;

#endif//H_SG_WC6UPDATE__PRIVATE_PROTOTYPES_H
