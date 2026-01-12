            #include <stdio.h>
            #include <stdlib.h>
            struct node
            { int data;
                struct node* left;
                struct node* right;

                
            };
            struct node* createnode(int data){
                struct node* n;
                n=(struct node*)malloc(sizeof(struct node));
                n->data=data;
                n->left=NULL;
                n->right=NULL;
                return n;
            }
            void preOder(struct node* root){
                if(root!=NULL){
                    printf("%d  ",root->data);
                    preOder(root->left);
                    preOder(root->right);
                }
            }
            void postOder(struct node* root){
                if(root!=NULL){
                
                    postOder(root->left);
                    postOder(root->right);
                    printf("%d  ",root->data);
                }
            }
            void inOder(struct node* root){
                if(root!=NULL){
                
                    inOder(root->left);
                        printf("%d  ",root->data);
                    inOder(root->right);
                    
                }
            }

            int main(){
                struct node *p=createnode(4);
                struct node *p1=createnode(1);
                struct node *p2=createnode(6);
                struct node *p3=createnode(5);
                struct node *p4=createnode(2);
                p->left=p1;
                p->right=p2;
                p1->left=p3;
                p1->right=p4;
                printf("This is PREODER Traversaling: ");
                preOder(p);
                printf("\n");
                printf("This is POSTODER Trversaling: ");
                
                postOder(p);
                printf("\n");
                printf("This is INODER rversaling:   ");
            
                inOder(p);

                return 0;
            }