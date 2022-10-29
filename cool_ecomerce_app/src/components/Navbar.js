import React from "react";
import styled from 'styled-components';
import { Badge } from "@material-ui/core";
import { ShoppingCartOutlined } from "@material-ui/icons";

export default function Navbar() {

    const Container = styled.div`
    height: 60px;
    
  `;

    const Wrapper = styled.div`
    padding: 10px 20px;
    display: flex;
    align-items: center;
    justify-content: space-between;
    
  `;

    const Left = styled.div`
    flex: 1;
    display: flex;
    align-items: center;
  `;

    const Language = styled.span`
    font-size: 14px;
    cursor: pointer;
    
  `;



    const Input = styled.input`
    border: none;
    
  `;

    const Center = styled.div`
    flex: 1;
    text-align: center;
  `;

    const Logo = styled.h1`
    font-weight: bold;
  
  `;
    const Right = styled.div`
    flex: 1;
    display: flex;
    align-items: center;
    justify-content: flex-end;
   
  `;

    const MenuItem = styled.div`
    font-size: 14px;
    cursor: pointer;
    margin-left: 25px;
    
  `;



    return (
        <Container>
            <Wrapper>
                <Left>
                    <Logo>KoolWear E-com</Logo>
                </Left>
                <Center>
                </Center>
                <Right>
                    <MenuItem>About Us</MenuItem>
                    <MenuItem>Our Partner</MenuItem>
                    <MenuItem>Register</MenuItem>
                    <MenuItem>Sign-In</MenuItem>
                    <MenuItem>
                        <Badge badgeContent={4} color="primary">
                            <ShoppingCartOutlined />
                        </Badge>
                    </MenuItem>
                </Right>
            </Wrapper>
        </Container>
    );
};
